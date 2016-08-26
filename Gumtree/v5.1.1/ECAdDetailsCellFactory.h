/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECCellFactory.h>

@protocol ECAdDetailsViewDelegate;
@class ECAdDetailsConfig, ECAppConfig, NSMapTable;

@interface ECAdDetailsCellFactory : ECCellFactory {

	BOOL _showContactButtons;
	ECAdDetailsConfig* _adDetailsConfig;
	ECAppConfig* _appConfig;
	NSMapTable* _viewCache;
	id<ECAdDetailsViewDelegate> _viewDelegate;

}

@property (nonatomic,retain) ECAdDetailsConfig * adDetailsConfig;                          //@synthesize adDetailsConfig=_adDetailsConfig - In the implementation block
@property (nonatomic,retain) ECAppConfig * appConfig;                                      //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,retain) NSMapTable * viewCache;                                       //@synthesize viewCache=_viewCache - In the implementation block
@property (assign,nonatomic,__weak) id<ECAdDetailsViewDelegate> viewDelegate;              //@synthesize viewDelegate=_viewDelegate - In the implementation block
@property (assign,nonatomic) BOOL showContactButtons;                                      //@synthesize showContactButtons=_showContactButtons - In the implementation block
-(BOOL)isValidForObject:(id)arg1 metadata:(id)arg2 ;
-(id)viewForObject:(id)arg1 metadata:(id)arg2 ;
-(NSMapTable *)viewCache;
-(id<ECAdDetailsViewDelegate>)viewDelegate;
-(BOOL)showContactButtons;
-(id)initWithAppConfig:(id)arg1 adDetailsConfig:(id)arg2 viewDelegate:(id)arg3 showContactButtons:(BOOL)arg4 ;
-(void)setViewCache:(NSMapTable *)arg1 ;
-(void)setViewDelegate:(id<ECAdDetailsViewDelegate>)arg1 ;
-(void)setShowContactButtons:(BOOL)arg1 ;
-(ECAdDetailsConfig *)adDetailsConfig;
-(void)setAdDetailsConfig:(ECAdDetailsConfig *)arg1 ;
-(ECAppConfig *)appConfig;
-(void)setAppConfig:(ECAppConfig *)arg1 ;
@end
