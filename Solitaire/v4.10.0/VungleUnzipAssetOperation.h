/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/VungleOperation.h>

@class NSURL, VungleUnzipper;

@interface VungleUnzipAssetOperation : VungleOperation {

	NSURL* _zippedAssetURL;
	NSURL* _outputURL;
	VungleUnzipper* _unzipper;
	/*^block*/id _resultBlock;

}

@property (nonatomic,copy) NSURL * zippedAssetURL;                   //@synthesize zippedAssetURL=_zippedAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                        //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) VungleUnzipper * unzipper;              //@synthesize unzipper=_unzipper - In the implementation block
@property (nonatomic,copy) id resultBlock;                           //@synthesize resultBlock=_resultBlock - In the implementation block
-(id)initWithAsset:(id)arg1 targetDirectory:(id)arg2 ;
-(id)initWithZipFileURL:(id)arg1 targetDirectoryURL:(id)arg2 ;
-(id)initWithAsset:(id)arg1 targetDirectory:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithZipFileURL:(id)arg1 targetDirectoryURL:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(NSURL *)zippedAssetURL;
-(void)setZippedAssetURL:(NSURL *)arg1 ;
-(VungleUnzipper *)unzipper;
-(void)setUnzipper:(VungleUnzipper *)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(void)execute;
@end
