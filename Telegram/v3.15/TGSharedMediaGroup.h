/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
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
