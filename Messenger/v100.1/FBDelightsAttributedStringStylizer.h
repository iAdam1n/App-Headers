/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBMobileConfigContextManager, FBDelightsNYE2017FeatureGating;

@interface FBDelightsAttributedStringStylizer : NSObject {

	FBMobileConfigContextManager* _mobileConfigContextManager;
	FBDelightsNYE2017FeatureGating* _nye2017FeatureGating;

}
-(void)_stylizeString:(id)arg1 inRange:(NSRange)arg2 boldFont:(id)arg3 regularFont:(id)arg4 shouldHighlight:(BOOL*)arg5 ;
-(void)stylizePostMessage:(id)arg1 inRange:(NSRange)arg2 boldFont:(id)arg3 regularFont:(id)arg4 ;
-(void)stylizeCommentMessage:(id)arg1 inRange:(NSRange)arg2 boldFont:(id)arg3 regularFont:(id)arg4 ;
-(id)initWithSession:(id)arg1 ;
@end
