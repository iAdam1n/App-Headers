/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsCarouselDelegate.h>

@protocol FBQueriedActorFieldsProtocol;
@class FBEventsCarouselToolbox, FBMemModelObject, NSString;

@interface FBEventsSubscribeActionHandler : NSObject <FBEventsCarouselDelegate> {

	FBEventsCarouselToolbox* _toolbox;
	long long _caller;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _eventOwner;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedActorFieldsProtocol> eventOwner;              //@synthesize eventOwner=_eventOwner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapHeader:(id)arg1 ;
-(void)didTapFooter:(id)arg1 ;
-(void)didTapXout:(id)arg1 onEvent:(id)arg2 ;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)eventOwner;
-(void)setEventOwner:(FBMemModelObject*<FBQueriedActorFieldsProtocol>)arg1 ;
-(id)initWithToolbox:(id)arg1 eventOwner:(id)arg2 caller:(long long)arg3 ;
@end
