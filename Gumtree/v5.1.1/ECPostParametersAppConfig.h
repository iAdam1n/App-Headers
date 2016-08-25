/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ECPostParametersAppConfig : NSObject {

	BOOL _canManagePostParameters;
	NSArray* _categoriesList;

}

@property (nonatomic,readonly) BOOL canManagePostParameters;              //@synthesize canManagePostParameters=_canManagePostParameters - In the implementation block
@property (nonatomic,readonly) NSArray * categoriesList;                  //@synthesize categoriesList=_categoriesList - In the implementation block
-(BOOL)canManagePostParameters;
-(NSArray *)categoriesList;
-(id)initWithCategories:(id)arg1 canManagePostParameters:(BOOL)arg2 ;
-(BOOL)needsPostParameterManagementForCategory:(id)arg1 ;
@end

