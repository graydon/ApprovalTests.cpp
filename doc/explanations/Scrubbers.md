<!--
GENERATED FILE - DO NOT EDIT
This file was generated by [MarkdownSnippets](https://github.com/SimonCropp/MarkdownSnippets).
Source File: /doc/explanations/mdsource/Scrubbers.source.md
To change this file edit the source file and then execute ./run_markdown_templates.sh.
-->

<a id="top"></a>

# Scrubbers

<!-- toc -->
## Contents

  * [Introduction](#introduction)
  * [Interface](#interface)
  * [How to use Scrubbers](#how-to-use-scrubbers)
  * [Scrubber concepts](#scrubber-concepts)
  * [See also](#see-also)<!-- endtoc -->

## Introduction

![Scrubber Overview](/doc/images/ScrubberOverview.png?raw=true)

If you are having trouble getting tests running reproducibly, you might need to use a "scrubber" to convert the non-deterministic text to something stable.

## Interface

Fundamentally, a scrubber is function that takes a string and returns a string. You can create ones by passing in a function or a lambda. We also have some pre-made ones for your convenience.

## How to use Scrubbers

You can scrub text manually, before passing it in to Approvals::verify(), but the preferred method is to include a
Scrubber as an option.

<!-- snippet: scrubber_in_options_object -->
<a id='snippet-scrubber_in_options_object'/></a>
```cpp
Approvals::verify(input, Options().withScrubber(scrubber));
```
<sup><a href='/tests/DocTest_Tests/scrubbers/ScrubberTests.cpp#L76-L78' title='File snippet `scrubber_in_options_object` was extracted from'>snippet source</a> | <a href='#snippet-scrubber_in_options_object' title='Navigate to start of snippet `scrubber_in_options_object`'>anchor</a></sup>
<!-- endsnippet -->

## Scrubber concepts

There are several patterns that are commonly used when scrubbing:

* Replace troublesome text
* Replace troublesome text, tracking duplicates
* Combining scrubbers
* Deleting troublesome lines

## See also

* [How to Scrub Non-Deterministic Output](/doc/how_tos/ScrubNonDeterministicOutput.md#top)

---

[Back to User Guide](/doc/README.md#top)
