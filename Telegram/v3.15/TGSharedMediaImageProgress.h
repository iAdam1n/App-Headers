/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGSharedMediaImageProgress : NSObject {

	BOOL _hasProgress;
	double _value;

}

@property (nonatomic,readonly) BOOL hasProgress;              //@synthesize hasProgress=_hasProgress - In the implementation block
@property (nonatomic,readonly) double value;                  //@synthesize value=_value - In the implementation block
-(id)initWithHasProgress:(BOOL)arg1 value:(double)arg2 ;
-(double)value;
-(BOOL)hasProgress;
@end
