/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AFQueryStringComponent : NSObject {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,retain) id key;                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value;              //@synthesize value=_value - In the implementation block
-(id)URLEncodedStringValueWithEncoding:(unsigned long long)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(id)key;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setKey:(id)arg1 ;
@end
