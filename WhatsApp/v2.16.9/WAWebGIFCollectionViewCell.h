/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@class WAGIFULRRepresentation, NSURLSessionDataTask, UIImageView, WALoopingVideoPlayerView, UILabel, NSString;

@interface WAWebGIFCollectionViewCell : UICollectionViewCell <UIWebViewDelegate> {

	WAGIFULRRepresentation* _GIF;
	unsigned long long _loadID;
	unsigned long long _thumbDownloadID;
	NSURLSessionDataTask* _thumbDownloadTask;
	unsigned long long _previewDownloadID;
	NSURLSessionDataTask* _previewDownloadTask;
	BOOL _starred;
	BOOL _play;
	UIImageView* _thumbnailImageView;
	WALoopingVideoPlayerView* _videoPlayer;
	UILabel* _starLabel;

}

@property (assign,nonatomic,__weak) UIImageView * thumbnailImageView;                    //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic,__weak) WALoopingVideoPlayerView * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (assign,nonatomic,__weak) UILabel * starLabel;                                 //@synthesize starLabel=_starLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localCacheFileNameForURL:(id)arg1 ;
-(void)resumeCurrentRequest;
-(void)setContent:(id)arg1 starred:(BOOL)arg2 ;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)loadThumbnailFromVideoURL:(id)arg1 cacheThumbURL:(id)arg2 loadID:(unsigned long long)arg3 ;
-(void)loadURL:(id)arg1 localOnly:(BOOL)arg2 downloadTask:(id*)arg3 downloadID:(unsigned long long*)arg4 completion:(/*^block*/id)arg5 ;
-(void)loadThumbnail:(unsigned long long)arg1 ;
-(UILabel *)starLabel;
-(void)setStarLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)load;
-(void)pause;
-(void)cancelCurrentRequest;
-(WALoopingVideoPlayerView *)videoPlayer;
-(void)play;
-(void)setVideoPlayer:(WALoopingVideoPlayerView *)arg1 ;
-(UIImageView *)thumbnailImageView;
@end
