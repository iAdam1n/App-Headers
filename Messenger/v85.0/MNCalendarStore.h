/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, MNModalPresentation;
@class FBOmnistore, FBMobileConfigContextManager, FBOmnistoreCollection, EKEventStore;

@interface MNCalendarStore : NSObject {

	FBOmnistore* _omnistore;
	id<MNAuthenticationManager> _authManager;
	FBMobileConfigContextManager* _configManager;
	id<MNModalPresentation> _navigationCoordinator;
	FBOmnistoreCollection* _collection;
	EKEventStore* _eventStore;
	BOOL _systemCalendarHasChangesToSync;

}
-(id)initWithOmnistore:(id)arg1 authManager:(id)arg2 configManager:(id)arg3 navigationCoordinator:(id)arg4 ;
-(void)presentPromptIfNeededAndAddCalendarEventToDefaultCalendar:(id)arg1 ;
-(void)_tearDownListeners;
-(void)_setUpListeners;
-(void)_startIfNeeded;
-(id)_fetchSystemCalendarEventsIfAvailableWithLowerBound:(id)arg1 upperBound:(id)arg2 ;
-(void)_saveRemoteCalendarEvents:(id)arg1 ;
-(void)_deleteRemoteEventsNotInEventArray:(id)arg1 ;
-(void)_requestAccessAndSaveEventToSystemCalendar:(id)arg1 ;
-(void)_systemCalendarEventsChanged;
-(void)_saveEventToSystemCalendar:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)sync;
@end
