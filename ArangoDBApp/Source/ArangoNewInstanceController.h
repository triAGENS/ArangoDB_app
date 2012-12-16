////////////////////////////////////////////////////////////////////////////////
/// @brief new instance controller
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2012 triAGENS GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is triAGENS GmbH, Cologne, Germany
///
/// @author Dr. Frank Celler
/// @author Michael Hackstein
/// @author Copyright 2012, triAGENS GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

#import "ArangoBaseController.h"

@class arangoAppDelegate;
@class ArangoConfiguration;

// -----------------------------------------------------------------------------
// --SECTION--                                       ArangoNewInstanceController
// -----------------------------------------------------------------------------

@interface ArangoNewInstanceController : ArangoBaseController

// -----------------------------------------------------------------------------
// --SECTION--                                                        properties
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @brief input field "instance name"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSTextField* nameField;

////////////////////////////////////////////////////////////////////////////////
/// @brief button "browser database path"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSButton* browseDatabaseButton;

////////////////////////////////////////////////////////////////////////////////
/// @brief input field "database path"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSTextField* databaseField;

////////////////////////////////////////////////////////////////////////////////
/// @brief input field "port"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSTextField* portField;

////////////////////////////////////////////////////////////////////////////////
/// @brief button "ok" options
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSButton* okButton;

////////////////////////////////////////////////////////////////////////////////
/// @brief button "abort" options
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSButton* abortButton;

////////////////////////////////////////////////////////////////////////////////
/// @brief button "show advanced" options
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSButton* showAdvanced;

////////////////////////////////////////////////////////////////////////////////
/// @brief button "ok" options
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSBox* advancedOptions;

////////////////////////////////////////////////////////////////////////////////
/// @brief input field "log path"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSTextField* logField;

////////////////////////////////////////////////////////////////////////////////
/// @brief button "browser database path"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSButton* browseLogButton;

////////////////////////////////////////////////////////////////////////////////
/// @brief combo "log level"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSComboBox* logLevelOptions;

////////////////////////////////////////////////////////////////////////////////
/// @brief check box "run on startup"
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, assign) IBOutlet NSButton* runOnStartupButton;

////////////////////////////////////////////////////////////////////////////////
/// @brief number formatter
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, retain, readonly) NSNumberFormatter* portFormatter;

////////////////////////////////////////////////////////////////////////////////
/// @brief configuration to edit
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, retain, readonly) ArangoConfiguration* configuration;

// -----------------------------------------------------------------------------
// --SECTION--                                                    public methods
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @brief default constructor
////////////////////////////////////////////////////////////////////////////////

- (id) initWithAppDelegate: (arangoAppDelegate*) delegate;

////////////////////////////////////////////////////////////////////////////////
/// @brief constructor
////////////////////////////////////////////////////////////////////////////////

- (id) initWithAppDelegate: (arangoAppDelegate*) delegate
          andConfiguration: (ArangoConfiguration*) config;

////////////////////////////////////////////////////////////////////////////////
/// @brief browse database path
////////////////////////////////////////////////////////////////////////////////

- (IBAction) browseDatabase: (id) sender;

////////////////////////////////////////////////////////////////////////////////
/// @brief browse log file
////////////////////////////////////////////////////////////////////////////////

- (IBAction) browseLog: (id) sender;

////////////////////////////////////////////////////////////////////////////////
/// @brief create instance
////////////////////////////////////////////////////////////////////////////////

- (IBAction) createInstance: (id) sender;

////////////////////////////////////////////////////////////////////////////////
/// @brief abort
////////////////////////////////////////////////////////////////////////////////

- (IBAction) abortCreate: (id) sender;

////////////////////////////////////////////////////////////////////////////////
/// @brief toggle advanced
////////////////////////////////////////////////////////////////////////////////

- (IBAction) toggleAdvanced: (id) sender;

@end

// -----------------------------------------------------------------------------
// --SECTION--                                                       END-OF-FILE
// -----------------------------------------------------------------------------

// Local Variables:
// mode: outline-minor
// outline-regexp: "^\\(/// @brief\\|/// {@inheritDoc}\\|/// @addtogroup\\|/// @page\\|// --SECTION--\\|/// @\\}\\)"
// End:
