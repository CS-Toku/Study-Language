module Paths_HelloHaskellWorld (
    version,
    getBinDir, getLibDir, getDataDir, getLibexecDir,
    getDataFileName, getSysconfDir
  ) where

import qualified Control.Exception as Exception
import Data.Version (Version(..))
import System.Environment (getEnv)
import Prelude

catchIO :: IO a -> (Exception.IOException -> IO a) -> IO a
catchIO = Exception.catch

version :: Version
version = Version [1,0] []
bindir, libdir, datadir, libexecdir, sysconfdir :: FilePath

bindir     = "/Users/CS_Toku/Library/Haskell/bin"
libdir     = "/Users/CS_Toku/Library/Haskell/ghc-7.8.3-x86_64/lib/HelloHaskellWorld-1.0"
datadir    = "/Users/CS_Toku/Library/Haskell/share/ghc-7.8.3-x86_64/HelloHaskellWorld-1.0"
libexecdir = "/Users/CS_Toku/Library/Haskell/libexec"
sysconfdir = "/Users/CS_Toku/Library/Haskell/etc"

getBinDir, getLibDir, getDataDir, getLibexecDir, getSysconfDir :: IO FilePath
getBinDir = catchIO (getEnv "HelloHaskellWorld_bindir") (\_ -> return bindir)
getLibDir = catchIO (getEnv "HelloHaskellWorld_libdir") (\_ -> return libdir)
getDataDir = catchIO (getEnv "HelloHaskellWorld_datadir") (\_ -> return datadir)
getLibexecDir = catchIO (getEnv "HelloHaskellWorld_libexecdir") (\_ -> return libexecdir)
getSysconfDir = catchIO (getEnv "HelloHaskellWorld_sysconfdir") (\_ -> return sysconfdir)

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = do
  dir <- getDataDir
  return (dir ++ "/" ++ name)
