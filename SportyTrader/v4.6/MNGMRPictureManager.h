/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <SportyTrader/MNGMRImageDownloaderDelegate.h>

@protocol MNGMRPictureManagerDelegate;
@class MNGMRImageDownloader, NSURL, NSString;

@interface MNGMRPictureManager : NSObject <UIAlertViewDelegate, MNGMRImageDownloaderDelegate> {

	id<MNGMRPictureManagerDelegate> _delegate;
	MNGMRImageDownloader* _imageDownloader;
	NSURL* _imageURL;

}

@property (assign,nonatomic) id<MNGMRPictureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNGMRImageDownloader * imageDownloader;                //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)storePicture:(id)arg1 ;
-(void)downloaderDidFailToSaveImageWithURL:(id)arg1 error:(id)arg2 ;
-(MNGMRImageDownloader *)imageDownloader;
-(void)setImageDownloader:(MNGMRImageDownloader *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNGMRPictureManagerDelegate>)arg1 ;
-(id<MNGMRPictureManagerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end
