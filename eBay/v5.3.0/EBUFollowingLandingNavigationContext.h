/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUAppNavigationContext.h>

@interface EBUFollowingLandingNavigationContext : EBUAppNavigationContext {

	BOOL _isForEditing;
	long long _contentType;

}

@property (assign,nonatomic) long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) BOOL isForEditing;                  //@synthesize isForEditing=_isForEditing - In the implementation block
+(id)contextWithContentType:(long long)arg1 ;
-(void)setContentType:(long long)arg1 ;
-(id)init;
-(long long)contentType;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isForEditing;
-(void)setIsForEditing:(BOOL)arg1 ;
@end

