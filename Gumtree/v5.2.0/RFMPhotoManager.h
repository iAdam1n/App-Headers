/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RFMPhotoManagerDelegate;
@class NSURL, NSOperationQueue;

@interface RFMPhotoManager : NSObject {

	id<RFMPhotoManagerDelegate> _delegate;
	NSURL* _photoURL;
	NSOperationQueue* _photoQueue;

}

@property (assign,nonatomic,__weak) id<RFMPhotoManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * photoURL;                                         //@synthesize photoURL=_photoURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * photoQueue;                            //@synthesize photoQueue=_photoQueue - In the implementation block
-(void)resetDelegate;
-(void)storePhoto:(id)arg1 ;
-(NSOperationQueue *)photoQueue;
-(void)informDelegateOfError:(id)arg1 ;
-(void)setPhotoQueue:(NSOperationQueue *)arg1 ;
-(void)imageDownloadFinished:(id)arg1 ;
-(void)informDelegateOfSuccess;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)setDelegate:(id<RFMPhotoManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<RFMPhotoManagerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSURL *)photoURL;
-(void)setPhotoURL:(NSURL *)arg1 ;
@end
