/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@protocol FBPageContextRowSectionComponentToolbox;
@class FBMemPage;

@interface FBPageContextRowSectionComponent : FBCompositeSectionComponent {

	FBMemPage* _page;
	id<FBPageContextRowSectionComponentToolbox> _toolbox;

}

@property (nonatomic,readonly) FBMemPage * page;                                                 //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) id<FBPageContextRowSectionComponentToolbox> toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithPage:(id)arg1 toolbox:(id)arg2 ;
+(id)initialState;
-(id<FBPageContextRowSectionComponentToolbox>)toolbox;
-(FBMemPage *)page;
@end
