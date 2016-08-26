/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedSecondaryAction.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, NSArray, FBFeedSecondaryActionContext, NSString;

@interface FBFeedSaveAction : NSObject <FBFeedSecondaryAction> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	NSArray* _trackingCodes;
	FBFeedSecondaryActionContext* _context;
	BOOL _isSave;
	BOOL _isEligibleForCaretNux;
	int _saveActionSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)saveActionForUnit:(id)arg1 trackingCodes:(id)arg2 saveActionSource:(int)arg3 context:(id)arg4 ;
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(id)initWithUnit:(id)arg1 trackingCodes:(id)arg2 saveActionSource:(int)arg3 context:(id)arg4 ;
-(void)_updateSaveInfoStory:(id)arg1 withAction:(int)arg2 ;
-(void)logSaveInfoEvent:(long long)arg1 ;
-(id)title;
-(id)accessibilityIdentifier;
-(id)icon;
-(id)detail;
@end
