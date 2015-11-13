/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/ASImageNode.h>

@protocol ASImageCacheProtocol, ASImageDownloaderProtocol, ASMultiplexImageNodeDelegate, ASMultiplexImageNodeDataSource;
@class NSArray;

@interface ASMultiplexImageNode : ASImageNode {

	id<ASImageCacheProtocol> _cache;
	id<ASImageDownloaderProtocol> _downloader;
	id<ASMultiplexImageNodeDelegate> _delegate;
	struct {
		unsigned downloadStart : 1;
		unsigned downloadProgress : 1;
		unsigned downloadFinish : 1;
		unsigned updatedImageDisplayFinish : 1;
		unsigned updatedImage : 1;
		unsigned displayFinish : 1;
	}  _delegateFlags;
	id<ASMultiplexImageNodeDataSource> _dataSource;
	struct {
		unsigned image : 1;
		unsigned URL : 1;
	}  _dataSourceFlags;
	BOOL _downloadsIntermediateImages;
	int _imageIdentifiersLock;
	NSArray* _imageIdentifiers;
	id _loadedImageIdentifier;
	id _loadingImageIdentifier;
	id _displayedImageIdentifier;
	id _downloadIdentifier;

}

@property (assign,nonatomic,__weak) id<ASMultiplexImageNodeDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ASMultiplexImageNodeDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL downloadsIntermediateImages;                                  //@synthesize downloadsIntermediateImages=_downloadsIntermediateImages - In the implementation block
@property (nonatomic,copy) NSArray * imageIdentifiers; 
@property (nonatomic,copy) id loadedImageIdentifier;                                            //@synthesize loadedImageIdentifier=_loadedImageIdentifier - In the implementation block
@property (nonatomic,readonly) id displayedImageIdentifier;                                     //@synthesize displayedImageIdentifier=_displayedImageIdentifier - In the implementation block
@property (nonatomic,copy) id loadingImageIdentifier;                                           //@synthesize loadingImageIdentifier=_loadingImageIdentifier - In the implementation block
-(id)initWithCache:(id)arg1 downloader:(id)arg2 ;
-(void)displayWillStart;
-(void)displayDidFinish;
-(void)clearContents;
-(void)_setDisplayedImageIdentifier:(id)arg1 withImage:(id)arg2 ;
-(void)_loadImageIdentifiers;
-(void)_setDownloadIdentifier:(id)arg1 ;
-(id)_bestImmediatelyAvailableImageFromDataSource:(id*)arg1 ;
-(void)_finishedLoadingImage:(id)arg1 forIdentifier:(id)arg2 error:(id)arg3 ;
-(id)_nextImageIdentifierToDownload;
-(void)setLoadingImageIdentifier:(id)arg1 ;
-(id)loadingImageIdentifier;
-(void)_loadALAssetWithIdentifier:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadPHAssetWithIdentifier:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadImageWithIdentifier:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchImageWithIdentifierFromCache:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)loadedImageIdentifier;
-(void)setLoadedImageIdentifier:(id)arg1 ;
-(void)_loadNextImage;
-(NSArray *)imageIdentifiers;
-(void)setImageIdentifiers:(NSArray *)arg1 ;
-(void)reloadImageIdentifierSources;
-(BOOL)downloadsIntermediateImages;
-(void)setDownloadsIntermediateImages:(BOOL)arg1 ;
-(id)displayedImageIdentifier;
-(void)fetchData;
-(void)setDataSource:(id<ASMultiplexImageNodeDataSource>)arg1 ;
-(void)setDelegate:(id<ASMultiplexImageNodeDelegate>)arg1 ;
-(id)init;
-(id<ASMultiplexImageNodeDataSource>)dataSource;
-(id<ASMultiplexImageNodeDelegate>)delegate;
@end

