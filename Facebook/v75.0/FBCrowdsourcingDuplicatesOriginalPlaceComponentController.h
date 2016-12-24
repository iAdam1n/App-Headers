/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDetailComponentController.h>

@class FBCrowdsourcingDuplicatesController, FBCrowdsourcingDuplicatesModel;

@interface FBCrowdsourcingDuplicatesOriginalPlaceComponentController : FBDetailComponentController {

	FBCrowdsourcingDuplicatesController* _controller;
	FBCrowdsourcingDuplicatesModel* _model;

}

@property (nonatomic,__weak,readonly) FBCrowdsourcingDuplicatesController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) FBCrowdsourcingDuplicatesModel * model;                               //@synthesize model=_model - In the implementation block
-(id)componentCell;
-(id)initWithController:(id)arg1 model:(id)arg2 ;
-(FBCrowdsourcingDuplicatesModel *)model;
-(FBCrowdsourcingDuplicatesController *)controller;
@end
