/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKTokenFieldBarDelegate <NSObject>
@optional
-(void)mkTokenFieldBar:(id)arg1 didAddToken:(id)arg2 obj:(id)arg3;
-(void)mkTokenFieldBar:(id)arg1 didRemoveToken:(id)arg2 obj:(id)arg3;
-(void)mkTokenFieldBarDidRemoveAllTokens:(id)arg1;
-(void)mkTokenFieldBar:(id)arg1 didReachMaxNumberOfTokens:(long long)arg2;
-(BOOL)mkTokenFieldBarShouldReturn:(id)arg1;
-(BOOL)mkTokenFieldBarShouldBeginEditing:(id)arg1;
-(void)mkTokenFieldBarDidBeginEditing:(id)arg1;
-(void)mkTokenFieldBarDidEndEditing:(id)arg1;
-(void)mkTokenFieldBar:(id)arg1 textDidChange:(id)arg2;
-(void)mkTokenFieldBarTextDidReset:(id)arg1;
-(void)mkTokenFieldBarDidChangeFrame:(id)arg1;

@end

