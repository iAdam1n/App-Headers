/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/DisplayNotice.h>

@class NSString, NSDictionary, NSMutableArray;

@interface AnnouncementNoticeBase : DisplayNotice {

	BOOL closeButtonVisible;
	BOOL isScreenTappable;
	int buttonH;
	int buttonW;
	int buttonX;
	int buttonY;
	float closeDelay;
	int closeH;
	int closeW;
	int closeX;
	int closeY;
	int height;
	int textH;
	int textW;
	int textX;
	int textY;
	int textR;
	int textG;
	int textB;
	int textA;
	int textFontSize;
	int width;
	NSString* backgroundImageUrl;
	NSString* closeButtonImageUrl;
	NSString* text;
	NSDictionary* info;
	NSMutableArray* items;

}

@property (nonatomic,retain) NSMutableArray * items; 
@property (nonatomic,retain) NSString * backgroundImageUrl; 
@property (assign,nonatomic) int buttonH; 
@property (assign,nonatomic) int buttonW; 
@property (assign,nonatomic) int buttonX; 
@property (assign,nonatomic) int buttonY; 
@property (nonatomic,retain) NSString * closeButtonImageUrl; 
@property (assign,nonatomic) BOOL closeButtonVisible; 
@property (assign,nonatomic) float closeDelay; 
@property (assign,nonatomic) int closeH; 
@property (assign,nonatomic) int closeW; 
@property (assign,nonatomic) int closeX; 
@property (assign,nonatomic) int closeY; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) BOOL isScreenTappable; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) int textH; 
@property (assign,nonatomic) int textW; 
@property (assign,nonatomic) int textX; 
@property (assign,nonatomic) int textY; 
@property (assign,nonatomic) int textR; 
@property (assign,nonatomic) int textG; 
@property (assign,nonatomic) int textB; 
@property (assign,nonatomic) int textA; 
@property (assign,nonatomic) int textFontSize; 
@property (assign,nonatomic) int width; 
@property (nonatomic,retain) NSDictionary * info; 
-(NSString *)backgroundImageUrl;
-(void)setBackgroundImageUrl:(NSString *)arg1 ;
-(int)buttonH;
-(void)setButtonH:(int)arg1 ;
-(int)buttonW;
-(void)setButtonW:(int)arg1 ;
-(NSString *)closeButtonImageUrl;
-(void)setCloseButtonImageUrl:(NSString *)arg1 ;
-(float)closeDelay;
-(void)setCloseDelay:(float)arg1 ;
-(int)closeH;
-(void)setCloseH:(int)arg1 ;
-(int)closeW;
-(void)setCloseW:(int)arg1 ;
-(int)closeX;
-(void)setCloseX:(int)arg1 ;
-(int)closeY;
-(void)setCloseY:(int)arg1 ;
-(BOOL)isScreenTappable;
-(void)setIsScreenTappable:(BOOL)arg1 ;
-(int)textH;
-(void)setTextH:(int)arg1 ;
-(int)textW;
-(void)setTextW:(int)arg1 ;
-(int)textX;
-(void)setTextX:(int)arg1 ;
-(int)textY;
-(void)setTextY:(int)arg1 ;
-(int)textR;
-(void)setTextR:(int)arg1 ;
-(int)textG;
-(void)setTextG:(int)arg1 ;
-(int)textB;
-(void)setTextB:(int)arg1 ;
-(int)textA;
-(void)setTextA:(int)arg1 ;
-(id)allImages;
-(BOOL)closeButtonVisible;
-(void)setCloseButtonVisible:(BOOL)arg1 ;
-(int)textFontSize;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(int)width;
-(int)height;
-(NSDictionary *)info;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setButtonX:(int)arg1 ;
-(void)setButtonY:(int)arg1 ;
-(int)buttonX;
-(int)buttonY;
-(void)setTextFontSize:(int)arg1 ;
@end
