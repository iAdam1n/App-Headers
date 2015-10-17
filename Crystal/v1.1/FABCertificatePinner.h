/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Crystal/Crystal-Structs.h>
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
