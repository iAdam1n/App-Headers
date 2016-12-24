/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WATarFile.h>

@class NSString, WAOffsetsFile;

@interface WABackupTarFile : WATarFile {

	NSString* _prefix;
	unsigned long long _fileIndex;
	WAOffsetsFile* _offsets;
	long long _suggestedMinimumTimestamp;
	long long _minimumCreationTimestamp;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)recommendedAuxiliaryFileForPath:(id)arg1 ;
+(id)appendPath:(id)arg1 toURL:(id)arg2 ;
+(id)indexPathForGroup:(unsigned long long)arg1 andFile:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 mode:(unsigned long long)arg2 commonPrefix:(id)arg3 ;
-(void)useAuxiliaryFileAtPath:(id)arg1 withFileCount:(unsigned long long)arg2 ;
-(BOOL)setFileList:(NSArray*)arg1 error:(out id*)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(id)initWithHandle:(id)arg1 mode:(unsigned long long)arg2 appendToEOF:(BOOL)arg3 ;
-(id)nameForPath:(id)arg1 ;
-(id)addFilesAtURLs:(id)arg1 withCancellationCheck:(/*^block*/id)arg2 ;
-(id)initWithHandle:(id)arg1 mode:(unsigned long long)arg2 commonPrefix:(id)arg3 ;
-(id)findPathsForGroup:(NSDictionary*)arg1 withCancellationCheck:(/*^block*/id)arg2 ;
-(id)headerForLinkAtPath:(id)arg1 toRelativePath:(id)arg2 ;
-(BOOL)setFileList:(NSArray*)arg1 errorCode:(out unsigned long long*)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(id)buildPathsForFileList:(NSArray*)arg1 withCancellationCheck:(/*^block*/id)arg2 ;
-(BOOL)canUseAuxiliaryFile;
-(unsigned long long)applyExtractionBugFixToPaths:(id)arg1 shouldCancel:(/*^block*/id)arg2 ;
-(unsigned long long)findStartingGroupIndexForPaths:(id)arg1 withCancellationBlock:(/*^block*/id)arg2 ;
-(id)absolutePathForItem:(id)arg1 ;
-(BOOL)addLinkAtPath:(id)arg1 toRelativePath:(id)arg2 ;
-(BOOL)fileAlreadyExtractedForHeader:(id)arg1 inDirectory:(id)arg2 ;
-(unsigned long long)extractFileWithHeader:(id)arg1 atOffset:(unsigned long long)arg2 toURL:(id)arg3 usingRelativeURL:(id)arg4 temporaryURL:(id)arg5 withCancellationCheck:(/*^block*/id)arg6 ;
-(unsigned long long)internalExtractFileWithHeader:(id)arg1 toURL:(id)arg2 usingRelativeURL:(id)arg3 temporaryURL:(id)arg4 withCancellationCheck:(/*^block*/id)arg5 ;
-(unsigned long long)extractToPath:(id)arg1 withHeader:(id)arg2 cancellationCheck:(/*^block*/id)arg3 ;
-(id)nextCreationDate;
-(unsigned long long)runMostRecentSearchWithMap:(id)arg1 usingValidator:(/*^block*/id)arg2 ;
-(unsigned long long)runBinarySearchWithCancellationBlock:(/*^block*/id)arg1 usingValidator:(/*^block*/id)arg2 ;
-(unsigned long long)runIterativeSearchWithCancellationBlock:(/*^block*/id)arg1 usingValidator:(/*^block*/id)arg2 ;
-(long long)findUpperTimestampBoundInPaths:(id)arg1 startingAtIndex:(unsigned long long)arg2 withCancellationCheck:(/*^block*/id)arg3 ;
-(void)useAuxiliaryFileAtPath:(id)arg1 ;
-(void)setMinimumCreationTimestampSuggestion:(long long)arg1 ;
-(unsigned long long)extractToDirectoryAtURL:(id)arg1 usingTemporaryURL:(id)arg2 startingAt:(id)arg3 withCancellationCheck:(/*^block*/id)arg4 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)finish;
@end
