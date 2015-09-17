//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCATRecipeEditController : AccessibilityBaseListController <AXEditableTableCellWithStepperDelegate>
{
    AXSwitchRecipe *_recipe;
    PSSpecifier *_timeoutSpecifier;
}

@property(retain, nonatomic) PSSpecifier *timeoutSpecifier; // @synthesize timeoutSpecifier=_timeoutSpecifier;
@property(retain, nonatomic) AXSwitchRecipe *recipe; // @synthesize recipe=_recipe;
- (id)stringValueForSpecifier:(id)arg1;
- (long long)keyboardTypeforSpecifier:(id)arg1;
- (double)maximumValueForSpecifier:(id)arg1;
- (double)minimumValueForSpecifier:(id)arg1;
- (double)stepValueForSpecifier:(id)arg1;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (double)valueForSpecifier:(id)arg1;
- (void)_saveRecipeIfApplicable;
- (id)_timeoutSpecifiers;
- (_Bool)_isTimeoutEnabled;
- (id)_mappingsSpecifiers;
- (id)_footerTextForNoMappings;
- (_Bool)_canShowCreateNewMappingSpecifier;
- (id)_createNewMappingSpecifier;
- (_Bool)_shouldAllowEditing;
- (void)_showLongPressControllerForExistingMapping:(id)arg1 forSpecifier:(id)arg2;
- (void)_showActionsForExistingMapping:(id)arg1 forSpecifier:(id)arg2;
- (void)_showSwitchesForMapping:(id)arg1 forSpecifier:(id)arg2;
- (void)_showSwitchesForNewMappingForSpecifier:(id)arg1;
- (void)_setTimeoutEnabled:(id)arg1 specifier:(id)arg2;
- (id)_isTimeoutEnabledForSpecifier:(id)arg1;
- (id)_mappingActionForSpecifier:(id)arg1;
- (void)_setRecipeName:(id)arg1 specifier:(id)arg2;
- (id)_recipeNameForSpecifier:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (id)title;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end