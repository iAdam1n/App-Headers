/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString, UIImage, NSURL, UIColor;

@interface FBRtcExpressionCellModel : NSObject {

	BOOL _assetsLoaded;
	BOOL _assetsLoading;
	BOOL _newlyIntroduced;
	FBUserSession* _session;
	NSString* _title;
	long long _iconPosition;
	UIImage* _iconImage;
	NSURL* _iconURL;
	double _assetsLoadingProgress;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) FBUserSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long iconPosition;                    //@synthesize iconPosition=_iconPosition - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                       //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                           //@synthesize iconURL=_iconURL - In the implementation block
@property (assign,nonatomic) BOOL assetsLoaded;                         //@synthesize assetsLoaded=_assetsLoaded - In the implementation block
@property (assign,nonatomic) BOOL assetsLoading;                        //@synthesize assetsLoading=_assetsLoading - In the implementation block
@property (assign,nonatomic) double assetsLoadingProgress;              //@synthesize assetsLoadingProgress=_assetsLoadingProgress - In the implementation block
@property (assign,nonatomic) BOOL newlyIntroduced;                      //@synthesize newlyIntroduced=_newlyIntroduced - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setAssetsLoaded:(BOOL)arg1 ;
-(BOOL)assetsLoaded;
-(BOOL)assetsLoading;
-(void)setAssetsLoading:(BOOL)arg1 ;
-(double)assetsLoadingProgress;
-(void)setAssetsLoadingProgress:(double)arg1 ;
-(BOOL)newlyIntroduced;
-(void)setNewlyIntroduced:(BOOL)arg1 ;
-(NSURL *)iconURL;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)iconImage;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setIconPosition:(long long)arg1 ;
-(long long)iconPosition;
-(FBUserSession *)session;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setIconURL:(NSURL *)arg1 ;
@end
