/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBContentValidating.h>

@class FBGraphBatchRequest, NSString;

@interface FBStreamResponseCountContentValidator : NSObject <FBContentValidating> {

	long long _responseCount;
	FBGraphBatchRequest* _batchRequest;

}

@property (nonatomic,readonly) FBGraphBatchRequest * batchRequest;              //@synthesize batchRequest=_batchRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBatchRequest:(id)arg1 ;
-(BOOL)validateContent:(id)arg1 responseProcessor:(id)arg2 error:(id*)arg3 ;
-(FBGraphBatchRequest *)batchRequest;
-(id)init;
@end

