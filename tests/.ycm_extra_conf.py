def Settings( **kwargs ):
  return {
    'flags': [ '-x', 'c++', '-Wall', '-Wextra', '-Werror', '-lSDL2', '-std=c++98', '-I./' ],
  }
