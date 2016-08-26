/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsTableViewSectionHeaderViewModel : FBValueObject <NSCopying> {

	BOOL _isHidden;
	BOOL _isLoadingIndicatorHidden;
	NSString* _text;

}

@property (nonatomic,readonly) BOOL isHidden;                              //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isLoadingIndicatorHidden;              //@synthesize isLoadingIndicatorHidden=_isLoadingIndicatorHidden - In the implementation block
-(id)initWithIsHidden:(BOOL)arg1 text:(id)arg2 isLoadingIndicatorHidden:(BOOL)arg3 ;
-(BOOL)isLoadingIndicatorHidden;
-(BOOL)isHidden;
-(NSString *)text;
@end
