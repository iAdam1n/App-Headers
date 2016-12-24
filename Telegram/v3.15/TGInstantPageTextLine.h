/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class NSArray;

@interface TGInstantPageTextLine : NSObject {

	CTLineRef _line;
	NSArray* _urlItems;
	NSArray* _strikethroughItems;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) NSArray * urlItems;                        //@synthesize urlItems=_urlItems - In the implementation block
@property (nonatomic,readonly) NSArray * strikethroughItems;              //@synthesize strikethroughItems=_strikethroughItems - In the implementation block
-(id)initWithLine:(CTLineRef)arg1 frame:(CGRect)arg2 urlItems:(id)arg3 strikethroughItems:(id)arg4 ;
-(NSArray *)urlItems;
-(NSArray *)strikethroughItems;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
@end
