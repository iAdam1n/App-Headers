/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSTextStorage, NSTextContainer, NSLayoutManager;

@interface WAMessageSenderNameSliceRenderer : NSObject {

	NSTextStorage* _senderNameTextStorage;
	NSTextStorage* _pushNameTextStorage;
	NSTextContainer* _senderNameTextContainer;
	NSTextContainer* _pushNameTextContainer;
	NSLayoutManager* _senderNameLayoutManager;
	NSLayoutManager* _pushNameLayoutManager;
	CGRect _senderNameTextRect;
	CGRect _pushNameTextRect;
	double _heightNeeded;
	double _preferredWidth;
	CGSize _fittedSize;
	SCD_Struct_WA40 _metrics;

}

@property (nonatomic,readonly) CGSize fittedSize;                    //@synthesize fittedSize=_fittedSize - In the implementation block
@property (nonatomic,readonly) double heightNeeded;                  //@synthesize heightNeeded=_heightNeeded - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WA40 metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) double preferredWidth;                //@synthesize preferredWidth=_preferredWidth - In the implementation block
-(CGSize)fittedSize;
-(void)internalFitToWidth:(double)arg1 ;
-(id)initWithSenderName:(id)arg1 senderNameColor:(id)arg2 pushName:(id)arg3 metrics:(SCD_Struct_WA40)arg4 ;
-(void)drawInCurrentContextAtPoint:(CGPoint)arg1 withWidth:(double)arg2 ;
-(double)heightNeeded;
-(SCD_Struct_WA40)metrics;
-(double)preferredWidth;
-(BOOL)isRTL;
@end
