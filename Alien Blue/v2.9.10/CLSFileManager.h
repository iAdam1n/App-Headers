/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileManager, NSArray;

@interface CLSFileManager : NSObject {

	NSString* _rootPath;
	NSFileManager* _underlyingFileManager;

}

@property (nonatomic,readonly) NSFileManager * underlyingFileManager;              //@synthesize underlyingFileManager=_underlyingFileManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * rootPath;                           //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * structurePath; 
@property (nonatomic,copy,readonly) NSString * activePath; 
@property (nonatomic,copy,readonly) NSString * processingPath; 
@property (nonatomic,copy,readonly) NSString * pendingPath; 
@property (nonatomic,copy,readonly) NSString * preparedPath; 
@property (nonatomic,readonly) NSArray * activePathContents; 
@property (nonatomic,readonly) NSArray * preparedPathContents; 
@property (nonatomic,readonly) NSArray * processingPathContents; 
-(BOOL)removeItemAtPath:(id)arg1 ;
-(id)pathNamespace;
-(NSFileManager *)underlyingFileManager;
-(void)enumerateFilesInDirectory:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)moveItemAtPath:(id)arg1 toDirectory:(id)arg2 ;
-(NSString *)structurePath;
-(NSString *)activePath;
-(id)contentsOfDirectory:(id)arg1 ;
-(NSString *)preparedPath;
-(NSString *)processingPath;
-(BOOL)createDirectoryAtPath:(id)arg1 ;
-(BOOL)moveItemsFromDirectory:(id)arg1 toDirectory:(id)arg2 ;
-(NSString *)pendingPath;
-(BOOL)removeContentsOfDirectoryAtPath:(id)arg1 ;
-(BOOL)removeContentsOfProcessingPath;
-(BOOL)removeContentsOfPendingPath;
-(NSArray *)activePathContents;
-(NSArray *)preparedPathContents;
-(NSArray *)processingPathContents;
-(BOOL)prepareForNewLaunch;
-(id)setupNewPathForExecutionIdentifier:(id)arg1 ;
-(void)removeLegacyDirectories;
-(void)enumerateReportsInProcessingDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFilesInActiveDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFilesInPreparedDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)moveProcessingContentsToPrepared;
-(BOOL)movePendingToProcessing;
-(BOOL)removeContentsOfAllPaths;
-(id)init;
-(NSString *)rootPath;
-(id)fileSizeAtPath:(id)arg1 ;
@end

