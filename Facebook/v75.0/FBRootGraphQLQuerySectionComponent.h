/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompositeSectionComponent.h>

@class FBRootGraphQLQuerySectionComponentConfiguration, FBSectionComponentToolbox;

@interface FBRootGraphQLQuerySectionComponent : FBCompositeSectionComponent {

	FBRootGraphQLQuerySectionComponentConfiguration* _configuration;
	FBSectionComponentToolbox* _toolbox;

}

@property (nonatomic,readonly) FBRootGraphQLQuerySectionComponentConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FBSectionComponentToolbox * toolbox;                                          //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 sectionComponentGenerator:(const FBRootGraphQLQuerySectionComponentGenerator*)arg3 ;
+(id)initialState;
-(FBSectionComponentToolbox *)toolbox;
-(FBRootGraphQLQuerySectionComponentConfiguration *)configuration;
@end
