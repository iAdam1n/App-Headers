/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGModernViewModel.h>

@class UIColor, NSString, NSArray;

@interface TGMessageImageViewModel : TGModernViewModel {

	int _timestampPosition;
	UIColor* _timestampColor;
	NSString* _timestampString;
	NSString* _signatureString;
	BOOL _displayCheckmarks;
	int _checkmarkValue;
	BOOL _displayViews;
	int _viewsValue;
	BOOL _displayTimestampProgress;
	NSString* _additionalDataString;
	double _completeDuration;
	BOOL _mediaVisible;
	BOOL _expectExtendedEdges;
	BOOL _timestampHidden;
	BOOL _isBroadcast;
	BOOL _flexibleTimestamp;
	int _overlayType;
	NSString* _uri;
	double _overlayDiameter;
	UIColor* _overlayBackgroundColorHint;
	double _progress;
	NSArray* _detailStrings;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	CGSize _inlineVideoSize;
	UIEdgeInsets _inlineVideoInsets;
	UIEdgeInsets _detailStringsInsets;

}

@property (assign,nonatomic) BOOL mediaVisible;                                 //@synthesize mediaVisible=_mediaVisible - In the implementation block
@property (assign,nonatomic) BOOL expectExtendedEdges;                          //@synthesize expectExtendedEdges=_expectExtendedEdges - In the implementation block
@property (nonatomic,retain) NSString * uri;                                    //@synthesize uri=_uri - In the implementation block
@property (assign,nonatomic) double overlayDiameter;                            //@synthesize overlayDiameter=_overlayDiameter - In the implementation block
@property (nonatomic,retain) UIColor * overlayBackgroundColorHint;              //@synthesize overlayBackgroundColorHint=_overlayBackgroundColorHint - In the implementation block
@property (assign,nonatomic) int overlayType;                                   //@synthesize overlayType=_overlayType - In the implementation block
@property (assign,nonatomic) double progress;                                   //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL timestampHidden;                              //@synthesize timestampHidden=_timestampHidden - In the implementation block
@property (assign,nonatomic) BOOL isBroadcast;                                  //@synthesize isBroadcast=_isBroadcast - In the implementation block
@property (assign,nonatomic) UIEdgeInsets inlineVideoInsets;                    //@synthesize inlineVideoInsets=_inlineVideoInsets - In the implementation block
@property (assign,nonatomic) CGSize inlineVideoSize;                            //@synthesize inlineVideoSize=_inlineVideoSize - In the implementation block
@property (assign,nonatomic) BOOL flexibleTimestamp;                            //@synthesize flexibleTimestamp=_flexibleTimestamp - In the implementation block
@property (nonatomic,retain) NSArray * detailStrings;                           //@synthesize detailStrings=_detailStrings - In the implementation block
@property (assign,nonatomic) UIEdgeInsets detailStringsInsets;                  //@synthesize detailStringsInsets=_detailStringsInsets - In the implementation block
@property (nonatomic,copy) id progressBlock;                                    //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)_updateViewStateIdentifier;
-(void)bindViewToContainer:(id)arg1 viewStorage:(id)arg2 ;
-(void)unbindView:(id)arg1 ;
-(void)setOverlayType:(int)arg1 animated:(BOOL)arg2 ;
-(void)setOverlayType:(int)arg1 ;
-(void)setIsBroadcast:(BOOL)arg1 ;
-(void)setExpectExtendedEdges:(BOOL)arg1 ;
-(BOOL)expectExtendedEdges;
-(void)setAdditionalDataString:(id)arg1 ;
-(void)setTimestampColor:(id)arg1 ;
-(void)setTimestampString:(id)arg1 signatureString:(id)arg2 displayCheckmarks:(BOOL)arg3 checkmarkValue:(int)arg4 displayViews:(BOOL)arg5 viewsValue:(int)arg6 animated:(BOOL)arg7 ;
-(void)setTimestampHidden:(BOOL)arg1 ;
-(void)setMediaVisible:(BOOL)arg1 ;
-(void)setOverlayBackgroundColorHint:(UIColor *)arg1 ;
-(void)setOverlayDiameter:(double)arg1 ;
-(void)reloadImage:(BOOL)arg1 ;
-(void)setFlexibleTimestamp:(BOOL)arg1 ;
-(void)setDisplayTimestampProgress:(BOOL)arg1 ;
-(void)setInlineVideoInsets:(UIEdgeInsets)arg1 ;
-(void)setInlineVideoSize:(CGSize)arg1 ;
-(void)setTimestampPosition:(int)arg1 ;
-(void)setAdditionalDataString:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSecretProgress:(double)arg1 completeDuration:(double)arg2 animated:(BOOL)arg3 ;
-(void)setDetailStrings:(id)arg1 detailStringsInsets:(UIEdgeInsets)arg2 animated:(BOOL)arg3 ;
-(void)setDetailStrings:(NSArray *)arg1 ;
-(BOOL)mediaVisible;
-(double)overlayDiameter;
-(UIColor *)overlayBackgroundColorHint;
-(BOOL)timestampHidden;
-(UIEdgeInsets)inlineVideoInsets;
-(CGSize)inlineVideoSize;
-(BOOL)flexibleTimestamp;
-(NSArray *)detailStrings;
-(UIEdgeInsets)detailStringsInsets;
-(void)setDetailStringsInsets:(UIEdgeInsets)arg1 ;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)progress;
-(Class)viewClass;
-(void)setUri:(NSString *)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(int)overlayType;
-(BOOL)isBroadcast;
-(NSString *)uri;
-(id)initWithUri:(id)arg1 ;
@end

