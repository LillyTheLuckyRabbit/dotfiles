let g:powerline_pycmd="py3"
set laststatus=2
filetype plugin on
syntax on
set number

" Plugins
call plug#begin('~/.vim/plugged')
Plug 'preservim/nerdcommenter'
Plug 'preservim/nerdtree'
map <F7> :NERDTreeToggle<CR>
Plug 'frazrepo/vim-rainbow'
let g:rainbow_active = 1
Plug 'jiangmiao/auto-pairs'
Plug 'junegunn/goyo.vim'
Plug 'easymotion/vim-easymotion'
Plug 'airblade/vim-gitgutter'
Plug 'tpope/vim-surround'
Plug 'valloric/youcompleteme'
Plug 'xuhdev/vim-latex-live-preview'
Plug 'vim-latex/vim-latex'
call plug#end()
