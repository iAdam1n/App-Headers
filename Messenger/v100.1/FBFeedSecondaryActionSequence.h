/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedFeedUnitFieldsProtocol;
@class NSDictionary, FBMemModelObject, NSArray, FBFeedSecondaryActionContext;

@interface FBFeedSecondaryActionSequence : NSObject {

	NSDictionary* _handlers;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	id _element;
	NSArray* _trackingCodes;
	FBFeedSecondaryActionContext* _context;

}
-(id)initWithHandlers:(id)arg1 feedUnit:(id)arg2 element:(id)arg3 trackingCodes:(id)arg4 context:(id)arg5 ;
-(id)generateAll;
-(BOOL)hasActions;
@end
