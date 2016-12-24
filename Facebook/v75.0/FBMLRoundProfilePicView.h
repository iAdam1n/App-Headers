/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMLRoundedRectView.h>

@class UIImage, NSError, NSString, FBImageDownloader, SRUser;

@interface FBMLRoundProfilePicView : FBMLRoundedRectView {

	BOOL _isBatchUpdating;
	UIImage* _defaultImage;
	NSError* _lastError;
	BOOL _blur;
	unsigned long long _imageQuality;
	NSString* _displayedUserUUID;
	BOOL _displayedBlur;
	FBImageDownloader* _imageDownloader;
	SRUser* _user;

}

@property (nonatomic,retain) FBImageDownloader * imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) SRUser * user;                                    //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) BOOL blur;                                        //@synthesize blur=_blur - In the implementation block
+(id)_defaultImage;
-(FBImageDownloader *)imageDownloader;
-(void)setImageDownloader:(FBImageDownloader *)arg1 ;
-(void)_configureViewFromProps;
-(id)initWithImageDownloader:(id)arg1 imageQuality:(unsigned long long)arg2 blur:(BOOL)arg3 ;
-(void)batchUpdate:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 radius:(double)arg2 rectColor:(id)arg3 rectImage:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)blur;
-(void)setBlur:(BOOL)arg1 ;
-(SRUser *)user;
-(void)setUser:(SRUser *)arg1 ;
@end
