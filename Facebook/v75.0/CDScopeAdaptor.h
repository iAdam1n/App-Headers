/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBInvalidating.h>

@class CDScope, NSString;

@interface CDScopeAdaptor : NSObject <FBInvalidating> {

	BOOL _valid;
	CDScope* _scope;

}

@property (nonatomic,readonly) CDScope * scope;                        //@synthesize scope=_scope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(id)initWithScope:(shared_ptr<compactdisk::experimental::Scope>*)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(CDScope *)scope;
@end
