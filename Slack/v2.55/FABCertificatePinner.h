/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Slack/Slack-Structs.h>
@class NSArray;

@interface FABCertificatePinner : NSObject {

	NSArray* _certificates;

}

@property (nonatomic,readonly) NSArray * certificates;              //@synthesize certificates=_certificates - In the implementation block
+(SecCertificateRef)createCertificationWithData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithCertificates:(id)arg1 ;
-(BOOL)handleChallenge:(id)arg1 fromURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(short)evaluateTrust:(SecTrustRef)arg1 result:(unsigned*)arg2 ;
-(NSArray *)certificates;
@end
