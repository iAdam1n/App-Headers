/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface MNThreadReadMarkValue : FBValueObject <NSCopying> {

	BOOL _shouldSendReadReceipt;
	unsigned long long _watermarkTimestamp;
	NSSet* _apnsMessageIds;

}

@property (nonatomic,readonly) unsigned long long watermarkTimestamp;              //@synthesize watermarkTimestamp=_watermarkTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendReadReceipt;                         //@synthesize shouldSendReadReceipt=_shouldSendReadReceipt - In the implementation block
@property (nonatomic,copy,readonly) NSSet * apnsMessageIds;                        //@synthesize apnsMessageIds=_apnsMessageIds - In the implementation block
-(unsigned long long)watermarkTimestamp;
-(NSSet *)apnsMessageIds;
-(BOOL)shouldSendReadReceipt;
-(id)initWithWatermarkTimestamp:(unsigned long long)arg1 shouldSendReadReceipt:(BOOL)arg2 apnsMessageIds:(id)arg3 ;
@end

