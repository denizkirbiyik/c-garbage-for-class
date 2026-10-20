CC = gcc
CFLAGS = -Wall -Wextra -std=c23

SOURCES = $(wildcard */*.c)

src_to_target = $(patsubst %/,%-build/,$(dir $(1)))$(basename $(notdir $(1)))

TARGETS = $(foreach src,$(SOURCES),$(call src_to_target,$(src)))

all: $(TARGETS)

define BUILD_RULE
$(call src_to_target,$(1)): $(1)
	@mkdir -p $$(dir $$@)
	$$(CC) $$(CFLAGS) $$< -o $$@
endef

$(foreach src,$(SOURCES),$(eval $(call BUILD_RULE,$(src))))

clean:
	rm -rf *-build

.PHONY: all clean
