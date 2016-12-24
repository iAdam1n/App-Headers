/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNMessageReceiptStateViewModel : FBValueObject <NSCopying> {

	unsigned long long _receiptState;
	NSString* _offlineThreadingId;
	UIColor* _color;
	UIColor* _backgroundCircleColor;

}

@property (nonatomic,readonly) unsigned long long receiptState;                   //@synthesize receiptState=_receiptState - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) UIColor * color;                              //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundCircleColor;              //@synthesize backgroundCircleColor=_backgroundCircleColor - In the implementation block
-(NSString *)offlineThreadingId;
-(unsigned long long)receiptState;
-(UIColor *)backgroundCircleColor;
-(id)initWithReceiptState:(unsigned long long)arg1 offlineThreadingId:(id)arg2 color:(id)arg3 backgroundCircleColor:(id)arg4 ;
-(UIColor *)color;
@end
