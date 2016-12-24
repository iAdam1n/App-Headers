/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPeopleDiscoveryActionBarButtonModel, FBMemPerson, UIColor;

@interface FBPeopleDiscoveryActionBarModel : FBValueObject <NSCopying> {

	BOOL _styleTwoPrimaryButtons;
	double _width;
	FBPeopleDiscoveryActionBarButtonModel* _leftButtonModel;
	FBPeopleDiscoveryActionBarButtonModel* _centerButtonModel;
	FBPeopleDiscoveryActionBarButtonModel* _rightButtonModel;
	FBMemPerson* _targetPerson;
	UIColor* _primaryButtonTitleColor;
	UIColor* _primaryButtonBackgroundColor;
	UIColor* _leftPrimaryButtonTitleColor;
	UIColor* _leftPrimaryButtonBackgroundColor;

}

@property (nonatomic,readonly) double width;                                                                //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) FBPeopleDiscoveryActionBarButtonModel * leftButtonModel;                //@synthesize leftButtonModel=_leftButtonModel - In the implementation block
@property (nonatomic,copy,readonly) FBPeopleDiscoveryActionBarButtonModel * centerButtonModel;              //@synthesize centerButtonModel=_centerButtonModel - In the implementation block
@property (nonatomic,copy,readonly) FBPeopleDiscoveryActionBarButtonModel * rightButtonModel;               //@synthesize rightButtonModel=_rightButtonModel - In the implementation block
@property (nonatomic,copy,readonly) FBMemPerson * targetPerson;                                             //@synthesize targetPerson=_targetPerson - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonTitleColor;                                      //@synthesize primaryButtonTitleColor=_primaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonBackgroundColor;                                 //@synthesize primaryButtonBackgroundColor=_primaryButtonBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * leftPrimaryButtonTitleColor;                                  //@synthesize leftPrimaryButtonTitleColor=_leftPrimaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * leftPrimaryButtonBackgroundColor;                             //@synthesize leftPrimaryButtonBackgroundColor=_leftPrimaryButtonBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL styleTwoPrimaryButtons;                                                 //@synthesize styleTwoPrimaryButtons=_styleTwoPrimaryButtons - In the implementation block
-(id)initWithWidth:(double)arg1 leftButtonModel:(id)arg2 centerButtonModel:(id)arg3 rightButtonModel:(id)arg4 targetPerson:(id)arg5 primaryButtonTitleColor:(id)arg6 primaryButtonBackgroundColor:(id)arg7 leftPrimaryButtonTitleColor:(id)arg8 leftPrimaryButtonBackgroundColor:(id)arg9 styleTwoPrimaryButtons:(BOOL)arg10 ;
-(BOOL)styleTwoPrimaryButtons;
-(FBPeopleDiscoveryActionBarButtonModel *)leftButtonModel;
-(UIColor *)leftPrimaryButtonTitleColor;
-(UIColor *)leftPrimaryButtonBackgroundColor;
-(FBPeopleDiscoveryActionBarButtonModel *)centerButtonModel;
-(UIColor *)primaryButtonTitleColor;
-(UIColor *)primaryButtonBackgroundColor;
-(FBPeopleDiscoveryActionBarButtonModel *)rightButtonModel;
-(FBMemPerson *)targetPerson;
-(double)width;
@end
