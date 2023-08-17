project('prime_checker', 'c',
  version : '0.1.0',
  license : 'MIT',
  default_options : ['warning_level=3'])

src = [
  'main.c',
  'logger.c',
  'prime_checker.c'
]

exe = executable('prime_checker',
  sources : src,
  link_args : '-lm',
  install : true)

test('basic', exe)
