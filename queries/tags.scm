; Tags for symbol navigation in Dune files
; Enables "go to definition", symbol search, and code navigation

; Library definitions
(stanza
  (stanza_name) @_stanza_type
  (#eq? @_stanza_type "library")
  (library_name
    [(quoted_string) (multiline_string)] @name)) @definition.library

; Executable definitions
(stanza
  (stanza_name) @_stanza_type
  (#eq? @_stanza_type "executable")
  (library_name
    [(quoted_string) (multiline_string)] @name)) @definition.executable

; Test definitions
(stanza
  (stanza_name) @_stanza_type
  (#eq? @_stanza_type "test")
  (library_name
    [(quoted_string) (multiline_string)] @name)) @definition.test

; Public names (library/executable public names)
(stanza
  (public_name
    [(quoted_string) (multiline_string)] @name)) @definition.public_name

; Module names
(module_name
  [(quoted_string) (multiline_string)] @name) @definition.module

; Package names
(package_name
  [(quoted_string) (multiline_string)] @name) @definition.package

; Alias definitions
(stanza
  (stanza_name) @_stanza_type
  (#eq? @_stanza_type "alias")
  (alias_name
    [(quoted_string) (multiline_string)] @name)) @definition.alias

; Project name (in dune-project files)
(stanza
  (stanza_name) @_stanza_type
  (#eq? @_stanza_type "name")
  [(quoted_string) (multiline_string)] @name) @definition.project

; Rule targets
(stanza
  (stanza_name) @_stanza_type
  (#eq? @_stanza_type "rule")
  (file_name_target
    (file_name
      [(quoted_string) (multiline_string)] @name))) @definition.target

; Library references (dependencies)
(stanza
  (field_name) @_field
  (#eq? @_field "libraries")
  (library_name
    [(quoted_string) (multiline_string)] @name)) @reference.library
