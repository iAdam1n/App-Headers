/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slack/Slack-Structs.h>
@class NSArray;

@interface FABCertificatePinner : NSObject {

	NSArray* _certificates;

}

@property (nonatomic,readonly) NSArray * certificates;              //@synthesize certificates=_certificates - In the implementation block
+(SecCertificateRef)createCertificationWithData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(short)evaluateTrust:(SecTrustRef)arg1 result:(unsigned*)arg2 ;
-(id)initWithCertificates:(id)arg1 ;
-(BOOL)handleChallenge:(id)arg1 fromURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)certificates;
@end
