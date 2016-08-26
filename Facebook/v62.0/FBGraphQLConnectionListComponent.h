/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompositeListComponent.h>

@protocol FBGraphQLConnectionListComponentToolbox;
@class FBGraphQLConnectionListComponentConfiguration, FBGraphQLConnectionController, FBConnectionListComponentState, FBGraphQLConnectionChangesetSequenceService;

@interface FBGraphQLConnectionListComponent : FBCompositeListComponent {

	FBGraphQLConnectionListComponentConfiguration* _configuration;
	id<FBGraphQLConnectionListComponentToolbox> _toolbox;
	/*^block*/id _componentProvider;
	FBGraphQLConnectionController* _connectionController;
	FBConnectionListComponentState* _state;
	FBGraphQLConnectionChangesetSequenceService* _connectionService;

}

@property (nonatomic,readonly) FBGraphQLConnectionListComponentConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionListComponentToolbox> toolbox;                          //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) id componentProvider;                                                    //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,retain) FBGraphQLConnectionController * connectionController;                           //@synthesize connectionController=_connectionController - In the implementation block
@property (nonatomic,readonly) FBConnectionListComponentState * state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionChangesetSequenceService * connectionService;              //@synthesize connectionService=_connectionService - In the implementation block
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentGenerator:(const FBListComponentGenerator*)arg3 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentProviderBlock:(/*^block*/id)arg3 ;
+(id)initialState;
-(id<FBGraphQLConnectionListComponentToolbox>)toolbox;
-(id)componentProvider;
-(FBGraphQLConnectionController *)connectionController;
-(void)setConnectionController:(FBGraphQLConnectionController *)arg1 ;
-(FBGraphQLConnectionChangesetSequenceService *)connectionService;
-(FBConnectionListComponentState *)state;
-(FBGraphQLConnectionListComponentConfiguration *)configuration;
@end
