/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TGSharedMediaGroup : NSObject {

	int _contentType;
	double _date;
	NSArray* _items;

}

@property (nonatomic,readonly) double date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) int contentType;              //@synthesize contentType=_contentType - In the implementation block
-(id)initWithDate:(double)arg1 items:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)date;
-(NSArray *)items;
-(int)contentType;
@end
