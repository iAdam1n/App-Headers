/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber;

@interface OptimizelyScreenShot : NSObject {

	BOOL _shouldSendScreenshots;
	BOOL _sendingScreenshot;
	NSNumber* _defaultCompression;
	NSNumber* _defaultImageScale;
	double _lastScreenshotRequestTime;

}

@property (nonatomic,retain) NSNumber * defaultCompression;                 //@synthesize defaultCompression=_defaultCompression - In the implementation block
@property (nonatomic,retain) NSNumber * defaultImageScale;                  //@synthesize defaultImageScale=_defaultImageScale - In the implementation block
@property (assign,nonatomic) BOOL shouldSendScreenshots;                    //@synthesize shouldSendScreenshots=_shouldSendScreenshots - In the implementation block
@property (assign,nonatomic) double lastScreenshotRequestTime;              //@synthesize lastScreenshotRequestTime=_lastScreenshotRequestTime - In the implementation block
@property (assign,nonatomic) BOOL sendingScreenshot;                        //@synthesize sendingScreenshot=_sendingScreenshot - In the implementation block
-(void)sendScreenShotToEditor;
-(void)setShouldSendScreenshots:(BOOL)arg1 ;
-(void)setSendingScreenshot:(BOOL)arg1 ;
-(void)setLastScreenshotRequestTime:(double)arg1 ;
-(void)setDefaultCompression:(NSNumber *)arg1 ;
-(void)setDefaultImageScale:(NSNumber *)arg1 ;
-(void)sendScreenShotToEditorScaledBy:(id)arg1 withCompression:(id)arg2 ;
-(double)lastScreenshotRequestTime;
-(void)startScreenshotTimeout:(double)arg1 ;
-(BOOL)shouldSendScreenshots;
-(BOOL)sendingScreenshot;
-(NSNumber *)defaultCompression;
-(NSNumber *)defaultImageScale;
-(id)getSubViewsDataForView:(id)arg1 ;
-(id)getScreenshotDataScaledBy:(id)arg1 withCompression:(id)arg2 ;
-(void)start;
@end
