/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol FBMUActionSheetOptionsProvider;
@class NSURL, FBUserSession, NSMutableArray, NSString;

@interface FBMUActionSheetController : NSObject <UIActionSheetDelegate> {

	NSURL* _canonicalURL;
	FBUserSession* _session;
	NSMutableArray* _actionSheetItems;
	id<FBMUActionSheetOptionsProvider> _actionSheetOptionsProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCanonicalURL:(id)arg1 session:(id)arg2 ;
-(void)displayActionSheetFromRect:(CGRect)arg1 inView:(id)arg2 withSong:(id)arg3 andFeedSaveAction:(id)arg4 animated:(BOOL)arg5 ;
-(id)_actionSheetProviderForApplicationType:(unsigned long long)arg1 andSession:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
