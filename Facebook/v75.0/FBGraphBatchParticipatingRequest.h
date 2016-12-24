/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFacebookAPIRequest.h>

@class NSString, NSDictionary;

@interface FBGraphBatchParticipatingRequest : FBFacebookAPIRequest {

	BOOL _needsResultInBatch;
	NSString* _name;
	NSString* _continueIfTruthy;
	FBGraphBatchParticipatingRequest* _parentRequest;

}

@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * batchParameters; 
@property (assign,nonatomic) BOOL needsResultInBatch;                                         //@synthesize needsResultInBatch=_needsResultInBatch - In the implementation block
@property (nonatomic,readonly) FBGraphBatchParticipatingRequest * parentRequest;              //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy) NSString * continueIfTruthy;                                       //@synthesize continueIfTruthy=_continueIfTruthy - In the implementation block
-(void)setNeedsResultInBatch:(BOOL)arg1 ;
-(void)setParentRequest:(id)arg1 needsParentResult:(BOOL)arg2 ;
-(NSDictionary *)batchParameters;
-(void)setContinueIfTruthy:(NSString *)arg1 ;
-(NSString *)continueIfTruthy;
-(BOOL)needsResultInBatch;
-(FBGraphBatchParticipatingRequest *)parentRequest;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
