/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedSecondaryAction.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, FBFeedSecondaryActionContext, FBUserSession, NSString;

@interface FBFeedNotMyArticleAction : NSObject <FBFeedSecondaryAction> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	FBFeedSecondaryActionContext* _context;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUnit:(id)arg1 context:(id)arg2 ;
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(id)overrideIcon;
-(long long)menuPriority;
-(BOOL)shouldPerformAfterMenuDismissed;
-(void)sendRequestWithWindow:(id)arg1 ;
-(unsigned long long)glyphName;
-(id)title;
-(id)accessibilityIdentifier;
-(id)detail;
@end
