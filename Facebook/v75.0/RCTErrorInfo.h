/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RCTErrorInfo : NSObject {

	NSString* _errorMessage;
	NSArray* _stack;

}

@property (nonatomic,copy,readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stack;                      //@synthesize stack=_stack - In the implementation block
-(id)initWithErrorMessage:(id)arg1 stack:(id)arg2 ;
-(NSArray *)stack;
-(NSString *)errorMessage;
@end
