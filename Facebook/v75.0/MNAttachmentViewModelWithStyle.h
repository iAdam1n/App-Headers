/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString, NSObject;

@interface MNAttachmentViewModelWithStyle : FBValueObject <NSCopying> {

	NSString* _style;
	NSObject*<NSCopying> _viewModel;

}

@property (nonatomic,copy,readonly) NSString * style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithStyle:(id)arg1 viewModel:(id)arg2 ;
-(NSString *)style;
-(NSObject*<NSCopying>)viewModel;
@end
